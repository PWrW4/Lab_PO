package laboratory.gui;

import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

/**
 * @author plechowicz
 *         created on 5/16/17.
 */
public class FXApplication extends javafx.application.Application {

	private final int width = 500;
	private final int height = 500;

	public static void main(String[] args) {
		launch(args);
	}

	@Override
	public void start(Stage primaryStage) throws Exception {
		primaryStage.setTitle("Drawing shapes");
		Group root = new Group();

		ShapeCanvas shapeCanvas = new ShapeCanvas(width, height);
		root.getChildren().add(shapeCanvas.getNode());
		Scene scene = new Scene(root);
		primaryStage.setScene(scene);
		primaryStage.getScene().setFill(Color.WHITE);
		primaryStage.setResizable(false);
		primaryStage.show();
	}
}